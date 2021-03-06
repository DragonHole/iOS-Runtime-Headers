/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLHierarchicalClustering : PLDataClustering {

	BOOL _usesSortedDataRelativeDistanceCache;
	double _threshold;
	unsigned long long _k;
	unsigned long long _linkage;

}

@property (assign,nonatomic) double threshold;                                      //@synthesize threshold=_threshold - In the implementation block
@property (assign,k,nonatomic) unsigned long long k;                                //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) unsigned long long linkage;                            //@synthesize linkage=_linkage - In the implementation block
@property (assign,nonatomic) BOOL usesSortedDataRelativeDistanceCache;              //@synthesize usesSortedDataRelativeDistanceCache=_usesSortedDataRelativeDistanceCache - In the implementation block
-(id)init;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(unsigned long long)_clustroidIndexForClusters:(unsigned long long*)arg1 numberOfObjects:(unsigned long long)arg2 distances:(double*)arg3 relativeDistanceCache:(double*)arg4 ;
-(double*)_createRelativeDistanceCacheForDataset:(id)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)k;
-(void)setK:(unsigned long long)arg1 ;
-(unsigned long long)linkage;
-(void)setLinkage:(unsigned long long)arg1 ;
-(BOOL)usesSortedDataRelativeDistanceCache;
-(void)setUsesSortedDataRelativeDistanceCache:(BOOL)arg1 ;
@end

