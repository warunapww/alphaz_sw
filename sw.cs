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

label="UseEquation_TempA_sub";
setSpaceTimeMap(prog,sys,label,"(i,j->1,i+j,j,1,0)");

#seq_A
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,0,"(i,j->0,0,0,0,0)");
setSpaceTimeMapForValueCopy(prog,sys,label,0,0,"(i,j->1,i+j,j,0,0)");
setSpaceTimeMapForMemoryFree(prog,sys,label,0,0,"(i,j->2,0,0,0,0)");
#seq_B
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,1,"(i,j->0,0,0,0,0)");
setSpaceTimeMapForValueCopy(prog,sys,label,0,1,"(i,j->1,i+j,j,0,0)");
setSpaceTimeMapForMemoryFree(prog,sys,label,0,1,"(i,j->2,0,0,0,0)");
#A
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,2,"(i,j->0,0,0,0,0)");
setSpaceTimeMapForValueCopy(prog,sys,label,0,2,"(i,j->1,i+j,j,0,0)");
setSpaceTimeMapForMemoryFree(prog,sys,label,0,2,"(i,j->2,0,0,0,0)");
#B
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,3,"(i,j->0,0,0,0,0)");
setSpaceTimeMapForValueCopy(prog,sys,label,0,3,"(i,j->1,i+j,j,0,0)");
setSpaceTimeMapForMemoryFree(prog,sys,label,0,3,"(i,j->2,0,0,0,0)");
#c
setSpaceTimeMapForMemoryAllocation(prog,sys,label,0,4,"(i,j->0,0,0,0,0)");
setSpaceTimeMapForValueCopy(prog,sys,label,0,4,"(i,j->1,i+j,j,0,0)");
setSpaceTimeMapForMemoryFree(prog,sys,label,0,4,"(i,j->2,0,0,0,0)");
#Aout
setSpaceTimeMapForMemoryAllocation(prog,sys,label,1,0,"(i,j->0,0,0,0,0)");
setSpaceTimeMapForValueCopy(prog,sys,label,1,0,"(i,j->1,i+j,j,2,0)");
setSpaceTimeMapForMemoryFree(prog,sys,label,1,0,"(i,j->2,0,0,0,0)");
#Bout
setSpaceTimeMapForMemoryAllocation(prog,sys,label,1,1,"(i,j->0,0,0,0,0)");
setSpaceTimeMapForValueCopy(prog,sys,label,1,1,"(i,j->1,i+j,j,2,0)");
setSpaceTimeMapForMemoryFree(prog,sys,label,1,1,"(i,j->2,0,0,0,0)");
#UseEquation_TempA_sub
print(sys+" started.");
#generateScheduledCode(prog, sys, outDir);
generateWrapper(prog, sys, outDir);
#generateMakefile(prog, sys, outDir);

print(sys+" is Done.");
#==============================================================================