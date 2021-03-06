/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSService, NSMutableDictionary;

@interface NPKTargetDeviceAssertionManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	IDSService* _transportationService;
	NSMutableDictionary* _outstandingAssertionStatusUpdaters;
	NSMutableDictionary* _assertTypesUUIDsMap;

}

@property (nonatomic,retain) NSMutableDictionary * outstandingAssertionStatusUpdaters;              //@synthesize outstandingAssertionStatusUpdaters=_outstandingAssertionStatusUpdaters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assertTypesUUIDsMap;                             //@synthesize assertTypesUUIDsMap=_assertTypesUUIDsMap - In the implementation block
@property (nonatomic,readonly) IDSService * transportationService;                                  //@synthesize transportationService=_transportationService - In the implementation block
-(id)_sendAssertionRequest:(id)arg1 ;
-(id)_outstandingAssertionStatusUpdaterWithRequest:(id)arg1 assertionUUID:(id)arg2 ;
-(void)_addOutstandingAssertionStatusUpdater:(id)arg1 withAssertType:(int)arg2 ;
-(id)_removeOutstandingAssertionStatusUpdaterWithUUID:(id)arg1 ;
-(NSMutableDictionary *)assertTypesUUIDsMap;
-(IDSService *)transportationService;
-(id)_IDSSendOptions;
-(NSMutableDictionary *)outstandingAssertionStatusUpdaters;
-(id)initWithTransportationService:(id)arg1 ;
-(id)acquireAssertionOfType:(unsigned long long)arg1 ;
-(void)invalidateAssertionWithUUID:(id)arg1 ;
-(id)assertionsUUIDsOfType:(unsigned long long)arg1 ;
-(void)setOutstandingAssertionStatusUpdaters:(NSMutableDictionary *)arg1 ;
-(void)setAssertTypesUUIDsMap:(NSMutableDictionary *)arg1 ;
@end

