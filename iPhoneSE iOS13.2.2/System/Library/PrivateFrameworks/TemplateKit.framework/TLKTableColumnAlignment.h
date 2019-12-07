/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKObject.h>

@interface TLKTableColumnAlignment : TLKObject {

	BOOL _isEqualWidth;
	unsigned long long _columnAlignment;
	long long _dataAlignment;

}

@property (assign,nonatomic) unsigned long long columnAlignment;              //@synthesize columnAlignment=_columnAlignment - In the implementation block
@property (assign,nonatomic) long long dataAlignment;                         //@synthesize dataAlignment=_dataAlignment - In the implementation block
@property (assign,nonatomic) BOOL isEqualWidth;                               //@synthesize isEqualWidth=_isEqualWidth - In the implementation block
-(id)description;
-(long long)textAlignment;
-(void)setColumnAlignment:(unsigned long long)arg1 ;
-(void)setDataAlignment:(long long)arg1 ;
-(void)setIsEqualWidth:(BOOL)arg1 ;
-(unsigned long long)columnAlignment;
-(long long)dataAlignment;
-(BOOL)isEqualWidth;
@end
