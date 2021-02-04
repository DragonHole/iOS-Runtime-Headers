/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol _IKJSDevice <IKJSDevice,JSExport>
@property (nonatomic,readonly) BOOL isInAirplaneMode; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
@property (nonatomic,readonly) BOOL isInRetailDemoMode; 
@property (nonatomic,readonly) NSString * vendorID; 
@property (nonatomic,readonly) NSNumber * pixelRatio; 
@property (nonatomic,readonly) BOOL runningAnInternalBuild; 
@property (nonatomic,readonly) NSString * osBuildNumber; 
@required
-(BOOL)runningAnInternalBuild;
-(NSString *)networkType;
-(NSNumber *)pixelRatio;
-(id)capacity:(id)arg1;
-(BOOL)isInAirplaneMode;
-(double)lastNetworkChangedTime;
-(BOOL)isInRetailDemoMode;
-(NSString *)osBuildNumber;
-(NSString *)vendorID;

@end
