/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NTKCTinCanSettings : NSObject {

	BOOL _tinCanEnabled;

}

@property (nonatomic,readonly) BOOL tinCanEnabled;              //@synthesize tinCanEnabled=_tinCanEnabled - In the implementation block
+(id)sharedInstance;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(void)_readValue;
-(BOOL)tinCanEnabled;
-(id)init;
-(void)dealloc;
@end

