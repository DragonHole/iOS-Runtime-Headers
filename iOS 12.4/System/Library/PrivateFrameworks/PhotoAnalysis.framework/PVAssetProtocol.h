/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSData;


@protocol PVAssetProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate; 
@property (nonatomic,readonly) NSData * distanceIdentity; 
@property (nonatomic,readonly) NSDate * clsDistanceIdentity; 
@required
-(CLLocationCoordinate2D)locationCoordinate;
-(NSString *)cloudIdentifier;
-(NSData *)distanceIdentity;
-(NSDate *)creationDate;
-(NSDate *)clsDistanceIdentity;
-(NSString *)localIdentifier;

@end

