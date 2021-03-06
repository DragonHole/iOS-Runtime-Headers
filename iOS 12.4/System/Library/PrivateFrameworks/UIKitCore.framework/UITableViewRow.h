/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {

	long long _indentationLevel;
	UITableViewCell* _cell;
	double _height;

}

@property (assign,nonatomic) double height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
+(id)row;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(long long)indentationLevel;
-(void)setIndentationLevel:(long long)arg1 ;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
@end

