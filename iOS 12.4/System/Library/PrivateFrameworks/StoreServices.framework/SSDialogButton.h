/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface SSDialogButton : NSObject {

	NSDictionary* _actionDictionary;
	NSString* _title;

}

@property (nonatomic,readonly) id actionParameter; 
@property (nonatomic,readonly) NSString * buttonAction; 
@property (nonatomic,readonly) NSString * URLTarget; 
@property (nonatomic,copy,readonly) NSString * buttonTitle; 
+(id)buttonWithTitle:(id)arg1 ;
-(id)initWithTitle:(id)arg1 actionDictionary:(id)arg2 ;
-(id)valueForActionProperty:(id)arg1 ;
-(id)actionParameter;
-(NSString *)URLTarget;
-(id)init;
-(void)dealloc;
-(NSString *)buttonAction;
-(NSString *)buttonTitle;
@end

