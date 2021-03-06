/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AccessoryIAPInterface;

@interface IAPDataBuffer : NSObject {

	char* _dataBufferIn;
	unsigned long long _dataBufferInLen;
	AccessoryIAPInterface* _parentiAPInterface;

}

@property (assign,nonatomic,__weak) AccessoryIAPInterface * parentiAPInterface;              //@synthesize parentiAPInterface=_parentiAPInterface - In the implementation block
-(void)dealloc;
-(id)initWithiAPInterface:(id)arg1 ;
-(AccessoryIAPInterface *)parentiAPInterface;
-(void)setParentiAPInterface:(AccessoryIAPInterface *)arg1 ;
@end

