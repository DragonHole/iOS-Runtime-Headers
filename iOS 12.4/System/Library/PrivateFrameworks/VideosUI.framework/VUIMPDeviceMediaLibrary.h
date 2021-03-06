/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDeviceMediaLibrary.h>

@class VUIMPMediaLibrary;

@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary {

	VUIMPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) VUIMPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
+(BOOL)_isUpdateInProgress;
+(BOOL)_isInitialUpdateInProgress;
-(id)initWithManager:(id)arg1 ;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(VUIMPMediaLibrary *)mediaLibrary;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg1 ;
-(BOOL)isUpdating;
-(BOOL)isInitialUpdateInProgress;
-(void)updateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateFromCloudWithReason:(long long)arg1 ;
@end

