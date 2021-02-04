/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@protocol WBUPrintPageRendererDelegate;
@class NSNumberFormatter, NSString, UIFont, UIColor, UIPrintFormatter;

@interface WBUPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate> {

	NSNumberFormatter* _numberFormatter;
	double _URLWidth;
	NSString* _dateString;
	double _dateWidth;
	double _printWidth;
	CGPoint _contentOffset;
	CGPoint _footerOffset;
	UIFont* _footerFont;
	UIColor* _footerColor;
	BOOL _printFooter;
	NSString* _URLString;
	UIPrintFormatter* _contentFormatter;
	id<WBUPrintPageRendererDelegate> _delegate;

}

@property (nonatomic,retain) NSString * URLString;                                          //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * contentFormatter;                           //@synthesize contentFormatter=_contentFormatter - In the implementation block
@property (assign,nonatomic) BOOL printFooter;                                              //@synthesize printFooter=_printFooter - In the implementation block
@property (assign,nonatomic,__weak) id<WBUPrintPageRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrintFooter:(BOOL)arg1 ;
-(UIPrintFormatter *)contentFormatter;
-(void)setContentFormatter:(UIPrintFormatter *)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
-(BOOL)printFooter;
-(id)init;
-(void)setDelegate:(id<WBUPrintPageRendererDelegate>)arg1 ;
-(id<WBUPrintPageRendererDelegate>)delegate;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(void)printInteractionControllerWillStartJob:(id)arg1 ;
-(void)printInteractionControllerDidFinishJob:(id)arg1 ;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(NSString *)URLString;
@end
