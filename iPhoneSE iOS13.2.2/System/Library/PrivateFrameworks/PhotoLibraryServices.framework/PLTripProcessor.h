/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLTripProcessor : NSObject
+(id)processTripsWithItems:(id)arg1 frequentLocations:(id)arg2 lastHomeVisit:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
+(double)_timeIntervalBetweenItem:(id)arg1 andItem:(id)arg2 ;
+(unsigned long long)_numberOfAssetsInItems:(id)arg1 ;
+(double)_minimumDistanceBetweenFrequentLocations:(id)arg1 andItem:(id)arg2 ;
+(id)_filterFrequentLocations:(id)arg1 forDateInterval:(id)arg2 ;
@end

