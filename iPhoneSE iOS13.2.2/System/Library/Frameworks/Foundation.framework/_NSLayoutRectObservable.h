/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationSource.h>

@protocol NSLayoutItem;
@class NSArray, NSLayoutRect;

@interface _NSLayoutRectObservable : NSObservationSource {

	NSArray* _anchorObservations;
	NSLayoutRect* _rectangle;
	id<NSLayoutItem> _layoutItem;

}
+(id)observableForRect:(id)arg1 inItem:(id)arg2 ;
-(void)dealloc;
-(id)initWithRect:(id)arg1 inLayoutItem:(id)arg2 ;
-(void)_reflectUpdatedRect:(id)arg1 ;
@end

