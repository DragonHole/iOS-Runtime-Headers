/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationWorkspace;

@interface TUApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _applicationWorkspace;

}

@property (nonatomic,readonly) LSApplicationWorkspace * applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
+(id)shared;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(LSApplicationWorkspace *)applicationWorkspace;
-(void)openSenstiveURL:(id)arg1 options:(id)arg2 ;
@end

