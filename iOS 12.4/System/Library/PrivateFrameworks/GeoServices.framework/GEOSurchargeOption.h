/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol GEOSurchargeOption
@property (nonatomic,readonly) NSArray * surchargeTypes; 
@property (nonatomic,readonly) unsigned long long selectedSurchargeTypeIndex; 
@property (nonatomic,readonly) id<GEOSurchargeType> selectedSurchargeType; 
@required
-(unsigned long long)selectedSurchargeTypeIndex;
-(NSArray *)surchargeTypes;
-(id<GEOSurchargeType>)selectedSurchargeType;

@end
