/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(id)initWithRect:(id)arg1 inLayoutItem:(id)arg2 ;
-(void)_reflectUpdatedRect:(id)arg1 ;
-(void)dealloc;
@end
