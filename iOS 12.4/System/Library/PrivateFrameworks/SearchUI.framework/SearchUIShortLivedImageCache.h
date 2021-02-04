/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface SearchUIShortLivedImageCache : NSObject {

	NSCache* _imageCache;

}

@property (retain) NSCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedCache;
-(id)imageForKey:(id)arg1 ;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(void)insertImage:(id)arg1 forKey:(id)arg2 ;
-(void)discardAllImages;
-(id)init;
@end
