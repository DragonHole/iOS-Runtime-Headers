/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class UIImage, NSArray;

@interface CKAnimatedImage : NSObject {

	UIImage* _image;
	NSArray* _durations;

}

@property (nonatomic,retain) UIImage * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * durations;              //@synthesize durations=_durations - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
+(id)filenameExtension;
+(id)animatedImageWithContentsOfASTCURL:(id)arg1 ;
+(id)animatedImageWithContentsOfCPBitmapURL:(id)arg1 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(/*^block*/id)arg3 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(BOOL)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(BOOL)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(id)imageWithContentsOfCPBitmapURL:(id)arg1 ;
+(id)animatedImageWithASTCData:(id)arg1 ;
+(BOOL)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 imageProvider:(/*^block*/id)arg3 frameProcessor:(/*^block*/id)arg4 ;
+(id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(/*^block*/id)arg2 ;
-(id)initWithImages:(id)arg1 durations:(id)arg2 ;
-(BOOL)writeToASTCURL:(id)arg1 ;
-(BOOL)writeToCPBitmapURL:(id)arg1 ;
-(NSArray *)durations;
-(id)_initWithImage:(id)arg1 durations:(id)arg2 ;
-(void)setDurations:(NSArray *)arg1 ;
-(CGSize)size;
-(double)scale;
-(id)description;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)frames;
@end

