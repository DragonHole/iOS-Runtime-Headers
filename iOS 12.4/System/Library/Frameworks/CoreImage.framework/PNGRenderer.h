/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CGRenderer.h>

@interface PNGRenderer : CGRenderer {

	CFURLRef fullURL;
	CGColorRef background;
	CGColorSpaceRef colorSpace;

}
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)flushRender;
-(CGImageRef)cgimage;
-(void)setFileURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

