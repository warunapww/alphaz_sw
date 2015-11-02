device int _atomicRegion = 0;
device int px = 0;
device int py = 0;
device int pz = 0;

bool isInAtomicRegion = false;
int pTileI,pTileJ,pTileK,pTileL;

if (threadIdx.x == 0 && threadIdx.y == 0 && threadIdx.z == 0) {
	while (atomicExch(&_atomicRegion, 1) != 0) {
	
	}
	    //critical region
	    if (pz != blockDim.z-1) {
	    	pTileK = atomicInc(&pz,blockDim.z);
	    	pTileJ = py;
	    	pTileI = px;
	    } else if (py != blockDim.y-1) {
	    	pTileK = 0;
	    	pz = 0;
	    	pTileJ = atomicInc(&py,blockDim.y);
	    	pTileI = px;
	    } else {
	    	pTileK = 0;
	    	pTileJ = 0;
	    	pz = 0;
	    	py = 0;
	    	pTileI = atomicInc(&px,blockDim.x);
	    }
	{
	    atomicExch(&_atomicRegion, 0);
    }
	
/*	while (!isInAtomicRegion) {
		if (atomicExch(&_atomicRegion, 1) == 0) {
		    //critical region
		    isInAtomicRegion = true;
		    atomicExch(&_atomicRegion, 0);
	    }
    }
*/    
} 