/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/CIGVRenderer.h>

@class NSURL, NSString;

@interface DOTRenderer : NSObject <CIGVRenderer> {

	_sFILE* file;
	NSURL* fileURL;
	NSString* fileTitle;
	BOOL drawEdgesFirst;
	int direction;
	CGSize separation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int direction; 
@property (readonly) CGSize separation; 
@property (readonly) BOOL drawEdgesFirst; 
-(id)init;
-(void)dealloc;
-(void)setFileURL:(id)arg1 ;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)drawNode:(id)arg1 ;
-(void)drawEdge:(id)arg1 withPath:(id)arg2 ;
-(int)direction;
-(CGSize)separation;
-(BOOL)drawEdgesFirst;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(void)setDirection:(int)arg1 ;
-(void)setSeparation:(CGSize)arg1 ;
-(void)setDrawEdgesFirst:(BOOL)arg1 ;
@end

