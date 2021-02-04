/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSURL, WLKChannelDetails, VUIContentMetadata, NSString;

@interface VUIActionPunchout : VUIAction {

	BOOL _isEntitledToPlay;
	BOOL _isPlaybackURL;
	NSURL* _punchoutURL;
	WLKChannelDetails* _channelDetails;
	VUIContentMetadata* _contentMetadata;
	NSString* _externalID;
	NSString* _referenceID;
	NSString* _canonicalID;
	NSString* _contentTitle;

}

@property (assign,nonatomic) BOOL isPlaybackURL;                                //@synthesize isPlaybackURL=_isPlaybackURL - In the implementation block
@property (nonatomic,copy) NSString * contentTitle;                             //@synthesize contentTitle=_contentTitle - In the implementation block
@property (nonatomic,retain) NSURL * punchoutURL;                               //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (nonatomic,retain) WLKChannelDetails * channelDetails;                //@synthesize channelDetails=_channelDetails - In the implementation block
@property (assign,nonatomic) BOOL isEntitledToPlay;                             //@synthesize isEntitledToPlay=_isEntitledToPlay - In the implementation block
@property (nonatomic,retain) VUIContentMetadata * contentMetadata;              //@synthesize contentMetadata=_contentMetadata - In the implementation block
@property (nonatomic,retain) NSString * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,retain) NSString * referenceID;                            //@synthesize referenceID=_referenceID - In the implementation block
@property (nonatomic,retain) NSString * canonicalID;                            //@synthesize canonicalID=_canonicalID - In the implementation block
-(NSString *)contentTitle;
-(NSString *)canonicalID;
-(void)setCanonicalID:(NSString *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 ;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)referenceID;
-(void)setReferenceID:(NSString *)arg1 ;
-(BOOL)isEntitledToPlay;
-(VUIContentMetadata *)contentMetadata;
-(WLKChannelDetails *)channelDetails;
-(NSURL *)punchoutURL;
-(void)setChannelDetails:(WLKChannelDetails *)arg1 ;
-(void)setContentTitle:(NSString *)arg1 ;
-(BOOL)_isValidAppInstalled;
-(void)_openAirplayPicker:(/*^block*/id)arg1 ;
-(void)_startAppInstallFlow:(/*^block*/id)arg1 ;
-(void)_openPunchoutURL:(/*^block*/id)arg1 ;
-(BOOL)isPlaybackURL;
-(void)setPunchoutURL:(NSURL *)arg1 ;
-(void)setIsEntitledToPlay:(BOOL)arg1 ;
-(void)setContentMetadata:(VUIContentMetadata *)arg1 ;
-(void)setIsPlaybackURL:(BOOL)arg1 ;
@end
