prog=ReadAlphabets("sw.ab");

CheckProgram(prog);

sys="sw";

#PrintAST(prog,sys);

outDir=sys;

#==============================================================================
baseSys="sw_base";
#outDir=baseSys+"_writec";

#CheckSystem(prog, baseSys);

setSpaceTimeMap(prog,baseSys,"Aout","(i->1,i+bM,0)");
setSpaceTimeMap(prog,baseSys,"Bout","(i->1,i+bN,0)");
setSpaceTimeMap(prog,baseSys,"gap_penalty","(->0,0,0)");
setSpaceTimeMap(prog,baseSys,"Table","(i,j->1,i+j,j)");

setOrderingDimensions(prog,baseSys,"0");
#outDir=baseSys;
#generateWriteC(prog, baseSys, outDir);
#generateScheduledCode(prog, baseSys, outDir);
#generateWrapper(prog, baseSys, outDir);
#generateMakefile(prog, baseSys, outDir);

print(baseSys+" is Done.");
#==============================================================================
#setSpaceTimeMap(prog,sys,"Aout","(i,j->i+N+1,j,0)");
#setSpaceTimeMap(prog,sys,"Bout","(i,j->M+i+1,j,0)");
outDir=sys;
setSpaceTimeMap(prog,sys,"Aout","(i,j->2,i,j,0,0)");
setSpaceTimeMap(prog,sys,"Bout","(i,j->2,i,j,0,0)");

setSpaceTimeMap(prog,sys,"TempA","(i,j,k->1,i+j-1,j,2,k)");
setSpaceTimeMap(prog,sys,"TempB","(i,j,k->1,i+j-1,j,2,k)");
setSpaceTimeMap(prog,sys,"Tempc","(i,j->1,i+j-1,j,2,bM)");

#---------------------------------
#alocate="(i,j->0,0,0,0,0)";
#copyInput="(i,j->1,i+j,j,0,0)";
#subSysCall="(i,j->1,i+j,j,1,0)";
#copyOutput="(i,j->1,i+j,j,2,0)";
#free="(i,j->2,0,0,0,0)";
#---------------------------------
alocate="(i,j->1,i+j,j,0,0)";
copyInput="(i,j->1,i+j,j,1,0)";
subSysCall="(i,j->1,i+j,j,2,0)";
copyOutput="(i,j->1,i+j,j,3,0)";
free="(i,j->1,i+j,j,4,0)";

label="UseEquation_TempA_sub";
setSpaceTimeMap(prog,sys,label,subSysCall);

#seq_A
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,0,alocate);
setSpaceTimeMapForValueCopy(prog,sys,label,0,0,copyInput);
setSpaceTimeMapForMemoryFree(prog,sys,label,0,0,free);
#seq_B
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,1,alocate);
setSpaceTimeMapForValueCopy(prog,sys,label,0,1,copyInput);
setSpaceTimeMapForMemoryFree(prog,sys,label,0,1,free);
#A
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,2,alocate);
setSpaceTimeMapForValueCopy(prog,sys,label,0,2,copyInput);
setSpaceTimeMapForMemoryFree(prog,sys,label,0,2,free);
#B
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,3,alocate);
setSpaceTimeMapForValueCopy(prog,sys,label,0,3,copyInput);
setSpaceTimeMapForMemoryFree(prog,sys,label,0,3,free);
#c
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,4,alocate);
setSpaceTimeMapForValueCopy(prog,sys,label,0,4,copyInput);
setSpaceTimeMapForMemoryFree(prog,sys,label,0,4,free);
#Aout
setSpaceTimeMapForMemoryAllocation(prog,sys,label,1,0,alocate);
setSpaceTimeMapForValueCopy(prog,sys,label,1,0,copyOutput);
setSpaceTimeMapForMemoryFree(prog,sys,label,1,0,free);
#Bout
setSpaceTimeMapForMemoryAllocation(prog,sys,label,1,1,alocate);
setSpaceTimeMapForValueCopy(prog,sys,label,1,1,copyOutput);
setSpaceTimeMapForMemoryFree(prog,sys,label,1,1,free);

setOrderingDimensions(prog,sys,"0,3");

setParallel(prog,sys,"","2");

print(sys+" started.");
generateScheduledCode(prog, sys, outDir);
generateWrapper(prog, sys, outDir);
#generateMakefile(prog, sys, outDir);

print(sys+" is Done.");
#==============================================================================