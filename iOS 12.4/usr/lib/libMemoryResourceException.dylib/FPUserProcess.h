/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libMemoryResourceException.dylib/FPProcess.h>

@class NSMutableArray, FPMemoryRegion;

@interface FPUserProcess : FPProcess {

	NSMutableArray* _images;
	unsigned _task;
	unsigned long long _sharedRegionBase;
	unsigned long long _sharedRegionSize;
	unsigned _sharedRegionAlignmentSize;
	unsigned long long _phys_footprint;
	unsigned long long _phys_footprint_peak;
	BOOL _anonymousDirtyRecalculation;
	long long _kprvt;
	long long _kshrd;
	unsigned long long _cachedDispositionAddress;
	int _cachedDisposition;
	FPMemoryRegion* _pendingUnusedSharedRegion;

}
-(void)gatherData;
-(id)initWithBsdInfo:(proc_bsdinfo*)arg1 ;
-(void)_setIdleExitStatusFromDirtyFlags:(unsigned)arg1 ;
-(BOOL)_populateTask;
-(void)_gatherIdleExitStatus;
-(BOOL)_isAlive;
-(NSDictionary*)auxData;
-(BOOL)_setSharedRegionFromPlatform:(long long)arg1 ;
-(void)_gatherKernelMemory;
-(void)_gatherPhysFootprint;
-(void)_gatherImageData;
-(void)_gatherMemoryData;
-(void)_processMachVMError:(int)arg1 expectingErrorOnExit:(int)arg2 ;
-(BOOL)_populateMemoryRegionWithPageQueries:(id)arg1 regionInfo:(vm_region_submap_info_64*)arg2 ;
-(unsigned long long)_lastNonSharedCacheRegion;
-(BOOL)_addRegionsToArray:(id)arg1 forRegionInSharedRegionStartingAt:(unsigned long long)arg2 withSize:(unsigned long long)arg3 withRegionInfo:(vm_region_submap_info_64*)arg4 imageEnumerator:(id)arg5 ;
-(void)enumerateRegions:(/*^block*/id)arg1 ;
@end

