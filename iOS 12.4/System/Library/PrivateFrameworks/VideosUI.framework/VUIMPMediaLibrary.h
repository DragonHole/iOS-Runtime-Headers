/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIMediaLibrary.h>

@protocol OS_dispatch_queue;
@class MPMediaLibrary, NSObject, NSOperationQueue;

@interface VUIMPMediaLibrary : VUIMediaLibrary {

	unsigned long long _connectionState;
	MPMediaLibrary* _mediaLibrary;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSOperationQueue* _serialOperationQueue;

}

@property (assign,nonatomic) unsigned long long connectionState;                                      //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                           //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                                 //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned long long)_connectionStateFromMPMediaLibraryStatus:(long long)arg1 ;
-(NSOperationQueue *)serialOperationQueue;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(unsigned long long)connectionState;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)title;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(BOOL)hasImageCache;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(id)initWithMPMediaLibrary:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(void)_handleMediaLibraryStatusDidChangeNotification:(id)arg1 ;
-(void)_enqueueProcessingBlock:(/*^block*/id)arg1 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
@end

