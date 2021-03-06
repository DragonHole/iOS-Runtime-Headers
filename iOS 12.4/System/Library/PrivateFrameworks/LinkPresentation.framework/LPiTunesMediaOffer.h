/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface LPiTunesMediaOffer : NSObject {

	BOOL _hasAudio;
	BOOL _hasVideo;
	BOOL _isEVOD;
	NSURL* _previewURL;
	NSString* _type;

}

@property (nonatomic,copy,readonly) NSURL * previewURL;              //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasAudio;                        //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,readonly) BOOL hasVideo;                        //@synthesize hasVideo=_hasVideo - In the implementation block
@property (nonatomic,readonly) BOOL isEVOD;                          //@synthesize isEVOD=_isEVOD - In the implementation block
+(id)typeForOffer:(id)arg1 ;
+(id)previewURLForOffer:(id)arg1 ;
+(BOOL)hasAudioForOffer:(id)arg1 ;
+(BOOL)hasVideoForOffer:(id)arg1 ;
+(BOOL)isEVODForOffer:(id)arg1 ;
-(BOOL)hasAudio;
-(BOOL)hasVideo;
-(NSURL *)previewURL;
-(BOOL)isEVOD;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
@end

