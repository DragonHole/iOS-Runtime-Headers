/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXTrampoline : NSObject {

	BOOL _warnAboutUnknownSelectors;
	id _caller;
	Class _targetClass;

}

@property (assign,nonatomic,__weak) id caller;                            //@synthesize caller=_caller - In the implementation block
@property (assign,nonatomic,__weak) Class targetClass;                    //@synthesize targetClass=_targetClass - In the implementation block
@property (assign,nonatomic) BOOL warnAboutUnknownSelectors;              //@synthesize warnAboutUnknownSelectors=_warnAboutUnknownSelectors - In the implementation block
+(void)methodDoesNotExistSentinal;
+(id)methodNotFoundSentinal;
+(id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2 ;
-(id)initWithCaller:(id)arg1 targetClass:(Class)arg2 ;
-(BOOL)warnAboutUnknownSelectors;
-(/*function pointer*/void*)_findIMPForSelector:(SEL)arg1 ;
-(BOOL)callerIsClass;
-(void)setWarnAboutUnknownSelectors:(BOOL)arg1 ;
-(void)setCaller:(id)arg1 ;
-(Class)targetClass;
-(void)setTargetClass:(Class)arg1 ;
-(id)caller;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

