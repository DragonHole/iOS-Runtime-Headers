/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString;


@protocol INActivateCarSignalIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * carName; 
@property (assign,nonatomic) unsigned long long signals; 
@required
-(void)setCarName:(id)arg1;
-(INSpeakableString *)carName;
-(unsigned long long)signals;
-(void)setSignals:(unsigned long long)arg1;
-(id)init;

@end

