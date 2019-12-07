/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, AVAudioFormat, NSDictionary;


@protocol RCSAudioFile <NSObject>
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) NSDictionary * settings; 
@required
-(NSURL *)url;
-(NSDictionary *)settings;
-(AVAudioFormat *)processingFormat;
-(AVAudioFormat *)fileFormat;

@end
