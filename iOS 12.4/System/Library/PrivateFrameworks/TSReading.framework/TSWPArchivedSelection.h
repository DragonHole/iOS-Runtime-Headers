/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class TSWPSelection;

@interface TSWPArchivedSelection : TSPObject {

	TSWPSelection* _selection;

}

@property (nonatomic,retain) TSWPSelection * selection;              //@synthesize selection=_selection - In the implementation block
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(TSWPSelection *)selection;
-(void)setSelection:(TSWPSelection *)arg1 ;
@end

