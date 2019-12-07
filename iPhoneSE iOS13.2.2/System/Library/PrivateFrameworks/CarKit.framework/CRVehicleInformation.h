/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CARSessionStatus;

@interface CRVehicleInformation : NSObject {

	CARSessionStatus* _currentSessionStatus;

}

@property (nonatomic,retain) CARSessionStatus * currentSessionStatus;                    //@synthesize currentSessionStatus=_currentSessionStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long driverPosition; 
@property (nonatomic,readonly) unsigned long long vehicleAmbientBrightness; 
-(id)init;
-(CARSessionStatus *)currentSessionStatus;
-(unsigned long long)driverPosition;
-(unsigned long long)vehicleAmbientBrightness;
-(void)setCurrentSessionStatus:(CARSessionStatus *)arg1 ;
@end
