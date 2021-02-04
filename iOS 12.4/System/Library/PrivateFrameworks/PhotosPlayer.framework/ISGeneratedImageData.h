/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISGeneratedImageData : NSObject <NSCopying> {

	CVBufferRef _imageBuffer;
	CGImageRef _imageRef;
	id _contents;
	CGAffineTransform _preferredTransform;

}

@property (nonatomic,readonly) CVBufferRef imageBuffer;                         //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,readonly) CGImageRef imageRef;                             //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) id contents;                                     //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredTransform;              //@synthesize preferredTransform=_preferredTransform - In the implementation block
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)preferredTransform;
-(id)_initWithImageContent:(id)arg1 ;
-(id)initWithImageBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)imageBuffer;
-(id)initWithCGImageRef:(CGImageRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)contents;
-(CGImageRef)imageRef;
@end
