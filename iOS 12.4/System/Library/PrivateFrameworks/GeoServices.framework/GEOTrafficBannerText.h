/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOFormattedString, NSMutableArray;

@interface GEOTrafficBannerText : PBCodable <NSCopying> {

	GEOFormattedString* _bannerLargeText;
	GEOFormattedString* _bannerSmallText;
	int _bannerStyle;
	unsigned _hideAtDistance;
	unsigned _incidentDistance;
	unsigned _incidentIndex;
	NSMutableArray* _localizedIncidentBanners;
	NSMutableArray* _localizedIncidentSpokenTexts;
	NSMutableArray* _localizedIncidentSubBanners;
	int _previousBannerChange;
	unsigned _secondsSaved;
	unsigned _showAtDistance;
	GEOFormattedString* _spokenPrompt;
	BOOL _disableFasterRerouteByDefault;
	SCD_Struct_GE62 _has;

}

@property (nonatomic,retain) NSMutableArray * localizedIncidentBanners;                  //@synthesize localizedIncidentBanners=_localizedIncidentBanners - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedIncidentSubBanners;               //@synthesize localizedIncidentSubBanners=_localizedIncidentSubBanners - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedIncidentSpokenTexts;              //@synthesize localizedIncidentSpokenTexts=_localizedIncidentSpokenTexts - In the implementation block
@property (nonatomic,readonly) BOOL hasBannerLargeText; 
@property (nonatomic,retain) GEOFormattedString * bannerLargeText;                       //@synthesize bannerLargeText=_bannerLargeText - In the implementation block
@property (nonatomic,readonly) BOOL hasBannerSmallText; 
@property (nonatomic,retain) GEOFormattedString * bannerSmallText;                       //@synthesize bannerSmallText=_bannerSmallText - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenPrompt; 
@property (nonatomic,retain) GEOFormattedString * spokenPrompt;                          //@synthesize spokenPrompt=_spokenPrompt - In the implementation block
@property (assign,nonatomic) BOOL hasShowAtDistance; 
@property (assign,nonatomic) unsigned showAtDistance;                                    //@synthesize showAtDistance=_showAtDistance - In the implementation block
@property (assign,nonatomic) BOOL hasHideAtDistance; 
@property (assign,nonatomic) unsigned hideAtDistance;                                    //@synthesize hideAtDistance=_hideAtDistance - In the implementation block
@property (assign,nonatomic) BOOL hasIncidentDistance; 
@property (assign,nonatomic) unsigned incidentDistance;                                  //@synthesize incidentDistance=_incidentDistance - In the implementation block
@property (assign,nonatomic) BOOL hasIncidentIndex; 
@property (assign,nonatomic) unsigned incidentIndex;                                     //@synthesize incidentIndex=_incidentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousBannerChange; 
@property (assign,nonatomic) int previousBannerChange;                                   //@synthesize previousBannerChange=_previousBannerChange - In the implementation block
@property (assign,nonatomic) BOOL hasDisableFasterRerouteByDefault; 
@property (assign,nonatomic) BOOL disableFasterRerouteByDefault;                         //@synthesize disableFasterRerouteByDefault=_disableFasterRerouteByDefault - In the implementation block
@property (assign,nonatomic) BOOL hasBannerStyle; 
@property (assign,nonatomic) int bannerStyle;                                            //@synthesize bannerStyle=_bannerStyle - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsSaved; 
@property (assign,nonatomic) unsigned secondsSaved;                                      //@synthesize secondsSaved=_secondsSaved - In the implementation block
+(Class)localizedIncidentBannerType;
+(Class)localizedIncidentSubBannerType;
+(Class)localizedIncidentSpokenTextType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addLocalizedIncidentBanner:(id)arg1 ;
-(void)addLocalizedIncidentSubBanner:(id)arg1 ;
-(void)addLocalizedIncidentSpokenText:(id)arg1 ;
-(unsigned long long)localizedIncidentBannersCount;
-(void)clearLocalizedIncidentBanners;
-(id)localizedIncidentBannerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)localizedIncidentSubBannersCount;
-(void)clearLocalizedIncidentSubBanners;
-(id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)localizedIncidentSpokenTextsCount;
-(void)clearLocalizedIncidentSpokenTexts;
-(id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1 ;
-(void)setBannerLargeText:(GEOFormattedString *)arg1 ;
-(void)setBannerSmallText:(GEOFormattedString *)arg1 ;
-(void)setSpokenPrompt:(GEOFormattedString *)arg1 ;
-(BOOL)hasBannerLargeText;
-(BOOL)hasBannerSmallText;
-(BOOL)hasSpokenPrompt;
-(void)setShowAtDistance:(unsigned)arg1 ;
-(void)setHasShowAtDistance:(BOOL)arg1 ;
-(BOOL)hasShowAtDistance;
-(void)setHideAtDistance:(unsigned)arg1 ;
-(void)setHasHideAtDistance:(BOOL)arg1 ;
-(BOOL)hasHideAtDistance;
-(void)setIncidentDistance:(unsigned)arg1 ;
-(void)setHasIncidentDistance:(BOOL)arg1 ;
-(BOOL)hasIncidentDistance;
-(void)setIncidentIndex:(unsigned)arg1 ;
-(void)setHasIncidentIndex:(BOOL)arg1 ;
-(BOOL)hasIncidentIndex;
-(int)previousBannerChange;
-(void)setPreviousBannerChange:(int)arg1 ;
-(void)setHasPreviousBannerChange:(BOOL)arg1 ;
-(BOOL)hasPreviousBannerChange;
-(id)previousBannerChangeAsString:(int)arg1 ;
-(int)StringAsPreviousBannerChange:(id)arg1 ;
-(BOOL)disableFasterRerouteByDefault;
-(void)setDisableFasterRerouteByDefault:(BOOL)arg1 ;
-(void)setHasDisableFasterRerouteByDefault:(BOOL)arg1 ;
-(BOOL)hasDisableFasterRerouteByDefault;
-(int)bannerStyle;
-(void)setBannerStyle:(int)arg1 ;
-(void)setHasBannerStyle:(BOOL)arg1 ;
-(BOOL)hasBannerStyle;
-(id)bannerStyleAsString:(int)arg1 ;
-(int)StringAsBannerStyle:(id)arg1 ;
-(void)setSecondsSaved:(unsigned)arg1 ;
-(void)setHasSecondsSaved:(BOOL)arg1 ;
-(BOOL)hasSecondsSaved;
-(NSMutableArray *)localizedIncidentBanners;
-(void)setLocalizedIncidentBanners:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localizedIncidentSubBanners;
-(void)setLocalizedIncidentSubBanners:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localizedIncidentSpokenTexts;
-(void)setLocalizedIncidentSpokenTexts:(NSMutableArray *)arg1 ;
-(GEOFormattedString *)bannerLargeText;
-(GEOFormattedString *)bannerSmallText;
-(GEOFormattedString *)spokenPrompt;
-(unsigned)showAtDistance;
-(unsigned)hideAtDistance;
-(unsigned)incidentDistance;
-(unsigned)incidentIndex;
-(unsigned)secondsSaved;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
