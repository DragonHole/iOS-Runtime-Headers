/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccessoryBLEPairing.framework/AccessoryBLEPairing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ACCBLEPairingAccessory : NSObject {

	BOOL _desiredBLEPairingState;
	NSString* _accessoryUID;
	NSDictionary* _accInfo;

}

@property (nonatomic,retain) NSString * accessoryUID;                  //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredBLEPairingState;              //@synthesize desiredBLEPairingState=_desiredBLEPairingState - In the implementation block
@property (nonatomic,retain) NSDictionary * accInfo;                   //@synthesize accInfo=_accInfo - In the implementation block
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(id)initWithAccessoryUID:(id)arg1 andAccInfo:(id)arg2 ;
-(BOOL)desiredBLEPairingState;
-(void)setDesiredBLEPairingState:(BOOL)arg1 ;
-(NSDictionary *)accInfo;
-(void)setAccInfo:(NSDictionary *)arg1 ;
@end

