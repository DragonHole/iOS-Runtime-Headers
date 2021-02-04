/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class AVItem, NSDictionary;

@interface AVPlaybackItem : NSObject {

	id _delegate;
	AVItem* _avItem;
	OpaqueFigPlaybackItemRef _fpItem;
	SCD_Struct_BW2 _currentDuration;
	CGSize _currentSize;
	BOOL _currentSizeIsValid;
	BOOL _isPreparingForInspectionInitialSamples;
	BOOL _isPreparingForInspectionAccurateDuration;
	BOOL _isInPlayQueue;
	double _bookmarkTime;
	NSDictionary* _streamStateNotificationInfo;
	NSDictionary* _lyricsNotificationInfo;
	NSDictionary* _inspectionNotificationInfo;
	NSDictionary* _playToEndNotificationInfo;

}

@property (retain) NSDictionary * inspectionNotificationInfo;                  //@synthesize inspectionNotificationInfo=_inspectionNotificationInfo - In the implementation block
@property (retain) NSDictionary * playToEndNotificationInfo;                   //@synthesize playToEndNotificationInfo=_playToEndNotificationInfo - In the implementation block
@property (retain) NSDictionary * streamStateNotificationInfo;                 //@synthesize streamStateNotificationInfo=_streamStateNotificationInfo - In the implementation block
@property (retain) NSDictionary * lyricsNotificationInfo;                      //@synthesize lyricsNotificationInfo=_lyricsNotificationInfo - In the implementation block
@property (assign) BOOL isInPlayQueue;                                         //@synthesize isInPlayQueue=_isInPlayQueue - In the implementation block
@property (readonly) BOOL isPreparingForInspection; 
@property (assign) BOOL isPreparingForInspectionInitialSamples;                //@synthesize isPreparingForInspectionInitialSamples=_isPreparingForInspectionInitialSamples - In the implementation block
@property (assign) BOOL isPreparingForInspectionAccurateDuration;              //@synthesize isPreparingForInspectionAccurateDuration=_isPreparingForInspectionAccurateDuration - In the implementation block
+(id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inArrayOfDictionaries:(id)arg3 ;
-(id)itemAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setItemAttribute:(id)arg1 value:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
-(id)formatDetailsForTracks;
-(id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(long long)arg4 ;
-(id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(long long)arg3 ;
-(id)avItem;
-(void)ensureFPItem;
-(OpaqueFigPlaybackItemRef)fpItem;
-(NSDictionary *)inspectionNotificationInfo;
-(void)makeReadyForInspection;
-(void)stealControlOfAVItem;
-(NSDictionary *)playToEndNotificationInfo;
-(NSDictionary *)lyricsNotificationInfo;
-(NSDictionary *)streamStateNotificationInfo;
-(void)removeFPListeners;
-(void)setStreamStateNotificationInfo:(NSDictionary *)arg1 ;
-(void)setLyricsNotificationInfo:(NSDictionary *)arg1 ;
-(void)setInspectionNotificationInfo:(NSDictionary *)arg1 ;
-(void)setPlayToEndNotificationInfo:(NSDictionary *)arg1 ;
-(BOOL)isPreparingForInspectionInitialSamples;
-(BOOL)isPreparingForInspectionAccurateDuration;
-(BOOL)isPreparingForInspection;
-(BOOL)isInPlayQueue;
-(void)cacheCurrentDuration;
-(void)cacheCurrentSize;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)fpNotificationNames;
-(void)addFPListeners;
-(void)applyAttributesFromAVItemToFPItem:(id)arg1 ;
-(void)applyBookmarkTime;
-(void)fpItemNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)setIsPreparingForInspectionInitialSamples:(BOOL)arg1 ;
-(void)setIsPreparingForInspectionAccurateDuration:(BOOL)arg1 ;
-(id)propertiesNeededForInspection;
-(void)setIsInPlayQueue:(BOOL)arg1 ;
-(void)fpItemNotificationInfo:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 item:(id)arg2 ;
-(BOOL)addToPlayQueue:(OpaqueFigPlayerRef)arg1 afterItem:(OpaqueFigPlaybackItemRef)arg2 ;
-(void)removeFromPlayQueue:(OpaqueFigPlayerRef)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(void)dealloc;
@end
