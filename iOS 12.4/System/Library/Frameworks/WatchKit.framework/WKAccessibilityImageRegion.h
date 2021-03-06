/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString;

@interface WKAccessibilityImageRegion : NSObject {

	NSString* _label;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

