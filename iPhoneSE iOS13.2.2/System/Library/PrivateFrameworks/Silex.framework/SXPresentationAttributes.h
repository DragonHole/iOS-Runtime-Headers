/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class NSString;

@interface SXPresentationAttributes : NSObject {

	BOOL _fadeInComponents;
	BOOL _enableViewportDebugging;
	BOOL _testingConditionEnabled;
	NSString* _contentSizeCategory;
	unsigned long long _presentationMode;
	double _contentScaleFactor;
	CGSize _canvasSize;

}

@property (assign,nonatomic) CGSize canvasSize;                                //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,retain) NSString * contentSizeCategory;                   //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;              //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic) BOOL fadeInComponents;                            //@synthesize fadeInComponents=_fadeInComponents - In the implementation block
@property (assign,nonatomic) double contentScaleFactor;                        //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL enableViewportDebugging;                     //@synthesize enableViewportDebugging=_enableViewportDebugging - In the implementation block
@property (assign,nonatomic) BOOL testingConditionEnabled;                     //@synthesize testingConditionEnabled=_testingConditionEnabled - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)contentScaleFactor;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setContentScaleFactor:(double)arg1 ;
-(CGSize)canvasSize;
-(unsigned long long)presentationMode;
-(void)setCanvasSize:(CGSize)arg1 ;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(BOOL)testingConditionEnabled;
-(void)setEnableViewportDebugging:(BOOL)arg1 ;
-(void)setTestingConditionEnabled:(BOOL)arg1 ;
-(BOOL)fadeInComponents;
-(BOOL)enableViewportDebugging;
-(void)setFadeInComponents:(BOOL)arg1 ;
@end
