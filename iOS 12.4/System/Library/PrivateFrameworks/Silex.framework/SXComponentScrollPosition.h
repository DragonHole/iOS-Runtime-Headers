/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition {

	NSString* _componentIdentifier;
	double _relativePageOffset;
	double _canvasWidth;

}

@property (nonatomic,retain) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (assign,nonatomic) double relativePageOffset;                   //@synthesize relativePageOffset=_relativePageOffset - In the implementation block
@property (assign,nonatomic) double canvasWidth;                          //@synthesize canvasWidth=_canvasWidth - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)setRelativePageOffset:(double)arg1 ;
-(void)setCanvasWidth:(double)arg1 ;
-(double)canvasWidth;
-(double)relativePageOffset;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

