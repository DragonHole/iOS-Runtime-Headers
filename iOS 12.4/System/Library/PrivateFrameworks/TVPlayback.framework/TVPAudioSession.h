/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVPAudioSession : NSObject {

	/*^block*/id _configurationBlock;

}

@property (nonatomic,copy) id configurationBlock;              //@synthesize configurationBlock=_configurationBlock - In the implementation block
+(id)sharedInstance;
-(void)_updateIfNecessary;
-(void)_mediaServicesReset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
@end

