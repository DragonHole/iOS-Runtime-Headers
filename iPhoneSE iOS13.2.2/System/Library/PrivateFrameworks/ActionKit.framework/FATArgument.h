/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FATField;

@interface FATArgument : NSObject {

	FATField* _field;
	id _value;

}

@property (nonatomic,retain) FATField * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) id value;                      //@synthesize value=_value - In the implementation block
+(id)argumentWithField:(id)arg1 value:(id)arg2 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(FATField *)field;
-(void)setField:(FATField *)arg1 ;
@end

