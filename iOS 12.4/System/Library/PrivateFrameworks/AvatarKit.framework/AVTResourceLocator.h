/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface AVTResourceLocator : NSObject {

	NSURL* _resourcesURL;
	NSURL* _componentsURL;

}

@property (readonly) NSURL * resourcesURL;                     //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (readonly) NSURL * memojiResourcesURL; 
@property (readonly) NSURL * animojiResourcesURL; 
@property (readonly) NSURL * componentsURL;                    //@synthesize componentsURL=_componentsURL - In the implementation block
@property (readonly) NSURL * maskImagesURL; 
@property (readonly) NSURL * materialsURL; 
@property (readonly) NSURL * presetThumbnailsURL; 
@property (readonly) NSURL * propsURL; 
+(id)sharedResourceLocator;
-(NSURL *)resourcesURL;
-(NSURL *)componentsURL;
-(NSURL *)memojiResourcesURL;
-(NSURL *)animojiResourcesURL;
-(id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 ;
-(id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(NSURL *)maskImagesURL;
-(NSURL *)materialsURL;
-(NSURL *)presetThumbnailsURL;
-(NSURL *)propsURL;
@end

