/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSAlertable.h>

@class NSString;

@interface TSAlertArticleUnavailable : NSObject <TSAlertable> {

	 alert;

}

@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSString * message; 
-(id)initWithBlockedReason:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)title;
-(NSString *)message;
-(id)initWithType:(long long)arg1 ;
@end

