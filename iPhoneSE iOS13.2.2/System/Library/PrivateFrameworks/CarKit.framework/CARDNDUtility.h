/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject {

	CARAutomaticDNDStatus* _DNDStatus;

}

@property (nonatomic,retain) CARAutomaticDNDStatus * DNDStatus;              //@synthesize DNDStatus=_DNDStatus - In the implementation block
+(id)sharedInstance;
-(CARAutomaticDNDStatus *)DNDStatus;
-(id)outputFromRhodesUtility;
-(void)setDNDStatus:(CARAutomaticDNDStatus *)arg1 ;
@end

