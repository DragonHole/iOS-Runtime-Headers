/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXAdDocumentStateManager.h>

@protocol SXAdDocumentStateManager <NSObject>
@required
-(void)addObserver:(id)arg1;

@end


@class SXViewport, NSPointerArray, NSString;

@interface SXAdDocumentStateManager : NSObject <SXViewportChangeListener, SXAdDocumentStateManager> {

	SXViewport* _viewport;
	NSPointerArray* _observers;

}

@property (nonatomic,readonly) SXViewport * viewport;                   //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSPointerArray * observers;              //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(id)initWithViewport:(id)arg1 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(NSPointerArray *)observers;
-(void)addObserver:(id)arg1 ;
@end

