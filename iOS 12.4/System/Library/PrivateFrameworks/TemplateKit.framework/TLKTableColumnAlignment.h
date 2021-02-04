/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(unsigned long long)columnAlignment;
-(void)setColumnAlignment:(unsigned long long)arg1 ;
-(long long)dataAlignment;
-(void)setDataAlignment:(long long)arg1 ;
-(BOOL)isEqualWidth;
-(void)setIsEqualWidth:(BOOL)arg1 ;
-(id)description;
-(long long)textAlignment;
@end
