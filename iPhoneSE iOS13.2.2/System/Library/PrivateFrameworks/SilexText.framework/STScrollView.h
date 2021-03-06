/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexText/SilexText-Structs.h>
#import <TSReading/TSDScrollView.h>
#import <libobjc.A.dylib/STAXElementOccluder.h>

@protocol STScrollViewDelegate;
@class STAXCustomRotorProvider, NSString;

@interface STScrollView : TSDScrollView <STAXElementOccluder> {

	id<STScrollViewDelegate> _scrollViewDelegate;
	STAXCustomRotorProvider* _customRotorProvider;

}

@property (nonatomic,retain) STAXCustomRotorProvider * customRotorProvider;                   //@synthesize customRotorProvider=_customRotorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<STScrollViewDelegate> scrollViewDelegate;              //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isBouncing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityCustomRotors;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_accessibilityScrollingEnabled;
-(id<STScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<STScrollViewDelegate>)arg1 ;
-(BOOL)shouldOccludeAccessibilityElement:(id)arg1 ;
-(BOOL)isBouncing;
-(STAXCustomRotorProvider *)customRotorProvider;
-(void)setCustomRotorProvider:(STAXCustomRotorProvider *)arg1 ;
@end

