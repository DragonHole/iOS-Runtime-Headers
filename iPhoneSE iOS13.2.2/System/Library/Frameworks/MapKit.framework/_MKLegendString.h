/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString;

@interface _MKLegendString : CALayer {

	CTLineRef _line;
	double _baselineDistanceFromBottom;
	NSAttributedString* _string;

}

@property (nonatomic,retain) NSAttributedString * string;                      //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) double baselineDistanceFromBottom;              //@synthesize baselineDistanceFromBottom=_baselineDistanceFromBottom - In the implementation block
-(id)init;
-(NSAttributedString *)string;
-(void)dealloc;
-(void)setString:(NSAttributedString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(double)baselineDistanceFromBottom;
@end
