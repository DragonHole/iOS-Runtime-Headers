/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DPDataProtectionMaster, NSUUID;

@interface _DPDataProtectionStateMonitor : NSObject {

	/*^block*/id _changeHandler;
	_DPDataProtectionMaster* _master;
	NSUUID* _handlerUUID;

}

@property (nonatomic,readonly) _DPDataProtectionMaster * master;              //@synthesize master=_master - In the implementation block
@property (readonly) NSUUID * handlerUUID;                                    //@synthesize handlerUUID=_handlerUUID - In the implementation block
@property (copy) id changeHandler;                                            //@synthesize changeHandler=_changeHandler - In the implementation block
+(id)dataProtectionClassA;
+(id)dataProtectionClassC;
+(id)dataProtectionClassD;
-(void)setChangeHandler:(id)arg1 ;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(id)changeHandler;
-(_DPDataProtectionMaster *)master;
-(NSUUID *)handlerUUID;
-(id)init;
-(void)dealloc;
@end
