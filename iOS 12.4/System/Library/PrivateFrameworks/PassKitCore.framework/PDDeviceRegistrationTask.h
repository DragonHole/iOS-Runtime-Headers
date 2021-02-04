/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject {

	BOOL _shouldForce;
	NSMutableArray* _completionHandlers;
	NSString* _reason;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldForce;                                 //@synthesize shouldForce=_shouldForce - In the implementation block
-(BOOL)shouldForce;
-(void)setShouldForce:(BOOL)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)init;
-(NSString *)reason;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
@end
