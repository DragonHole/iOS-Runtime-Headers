/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXQuickLookService.h>

@protocol SXQuickLookService <NSObject>
@required
-(void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(/*^block*/id)arg3 onError:(/*^block*/id)arg4;

@end


@class NSOperationQueue, NSString;

@interface SXQuickLookService : NSObject <SXQuickLookService> {

	NSOperationQueue* _thumbnailQueue;

}

@property (nonatomic,readonly) NSOperationQueue * thumbnailQueue;              //@synthesize thumbnailQueue=_thumbnailQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(NSOperationQueue *)thumbnailQueue;
-(id)init;
@end
