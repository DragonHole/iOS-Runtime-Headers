/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCFeedElement;
@class FCCloudContext, FCFeedViewport, FCFeedDescriptor, FCFeedViewportBookmark, FCFeedViewportDiff;

@interface FCFeedViewportExpandGapOperation : FCOperation {

	BOOL _lightweightOnly;
	BOOL _cachedOnly;
	BOOL _offlineMode;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedViewport* _viewport;
	FCFeedDescriptor* _feedDescriptor;
	id<FCFeedElement> _gapElement;
	unsigned long long _desiredHeadlineCount;
	FCFeedViewportBookmark* _bookmark;
	unsigned long long _gapExpansionDirection;
	long long _gapExpansionPolicy;
	/*^block*/id _expandGapCompletionHandler;
	FCFeedViewport* _sanitizedViewport;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _resultDiff;

}

@property (nonatomic,retain) FCFeedViewport * sanitizedViewport;                    //@synthesize sanitizedViewport=_sanitizedViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewport * resultViewport;                       //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * resultDiff;                       //@synthesize resultDiff=_resultDiff - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                             //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                     //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id<FCFeedElement> gapElement;                            //@synthesize gapElement=_gapElement - In the implementation block
@property (assign,nonatomic) unsigned long long desiredHeadlineCount;               //@synthesize desiredHeadlineCount=_desiredHeadlineCount - In the implementation block
@property (nonatomic,copy) FCFeedViewportBookmark * bookmark;                       //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) unsigned long long gapExpansionDirection;              //@synthesize gapExpansionDirection=_gapExpansionDirection - In the implementation block
@property (assign,nonatomic) long long gapExpansionPolicy;                          //@synthesize gapExpansionPolicy=_gapExpansionPolicy - In the implementation block
@property (assign) BOOL lightweightOnly;                                            //@synthesize lightweightOnly=_lightweightOnly - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                       //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (assign) BOOL offlineMode;                                                //@synthesize offlineMode=_offlineMode - In the implementation block
@property (nonatomic,copy) id expandGapCompletionHandler;                           //@synthesize expandGapCompletionHandler=_expandGapCompletionHandler - In the implementation block
+(id)_sanitizeViewport:(id)arg1 context:(id)arg2 feedDescriptor:(id)arg3 configuration:(id)arg4 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)cachedOnly;
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)setCachedOnly:(BOOL)arg1 ;
-(FCFeedViewportBookmark *)bookmark;
-(FCFeedViewport *)viewport;
-(unsigned long long)gapExpansionDirection;
-(id)expandGapCompletionHandler;
-(void)prepareOperation;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)setBookmark:(FCFeedViewportBookmark *)arg1 ;
-(void)setGapExpansionDirection:(unsigned long long)arg1 ;
-(long long)gapExpansionPolicy;
-(void)setGapExpansionPolicy:(long long)arg1 ;
-(void)setExpandGapCompletionHandler:(id)arg1 ;
-(unsigned long long)desiredHeadlineCount;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(void)setResultDiff:(FCFeedViewportDiff *)arg1 ;
-(FCFeedViewport *)resultViewport;
-(FCFeedViewportDiff *)resultDiff;
-(BOOL)lightweightOnly;
-(void)setLightweightOnly:(BOOL)arg1 ;
-(void)setDesiredHeadlineCount:(unsigned long long)arg1 ;
-(id<FCFeedElement>)gapElement;
-(void)setSanitizedViewport:(FCFeedViewport *)arg1 ;
-(FCFeedViewport *)sanitizedViewport;
-(id)_groupEmitterWithIdentifier:(id)arg1 ;
-(void)setGapElement:(id<FCFeedElement>)arg1 ;
-(BOOL)offlineMode;
-(void)setOfflineMode:(BOOL)arg1 ;
-(id)init;
-(void)setContext:(FCCloudContext *)arg1 ;
-(FCCloudContext *)context;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
@end

