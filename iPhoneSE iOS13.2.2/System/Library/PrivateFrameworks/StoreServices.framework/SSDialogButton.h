/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(id)init;
-(void)dealloc;
-(NSString *)buttonTitle;
-(NSString *)buttonAction;
-(id)initWithTitle:(id)arg1 actionDictionary:(id)arg2 ;
-(id)valueForActionProperty:(id)arg1 ;
-(id)actionParameter;
-(NSString *)URLTarget;
@end

