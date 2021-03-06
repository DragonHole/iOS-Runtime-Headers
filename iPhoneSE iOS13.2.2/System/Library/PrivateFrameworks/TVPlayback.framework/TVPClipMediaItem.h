/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPMediaItem;
@class NSObject, NSSet, NSMutableDictionary;

@interface TVPClipMediaItem : NSObject {

	NSObject*<TVPMediaItem> _mediaItem;
	NSSet* _localMetadataKeys;
	NSMutableDictionary* _localMetadata;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSSet * localMetadataKeys;                        //@synthesize localMetadataKeys=_localMetadataKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localMetadata;              //@synthesize localMetadata=_localMetadata - In the implementation block
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(BOOL)hasTrait:(id)arg1 ;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(void)_mediaItemMetadataWillOrDidChange:(id)arg1 ;
-(id)initWithMediaItem:(id)arg1 clipTimeRange:(id)arg2 ;
-(NSSet *)localMetadataKeys;
-(void)setLocalMetadataKeys:(NSSet *)arg1 ;
-(NSMutableDictionary *)localMetadata;
-(void)setLocalMetadata:(NSMutableDictionary *)arg1 ;
@end

