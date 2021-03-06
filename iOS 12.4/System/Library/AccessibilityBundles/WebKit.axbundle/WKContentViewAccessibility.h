/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/AccessibilityBundles/WebKit.axbundle/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/__WKContentViewAccessibility_super.h>

@interface WKContentViewAccessibility : __WKContentViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_processDidExit;
-(void)_didRelaunchProcess;
-(void)_setAccessibilityWebProcessToken:(id)arg1 ;
-(void)_accessibilityRegisterUIProcessTokens;
-(void)_zoomToRevealFocusedElement;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityServesAsFirstResponder;
-(id)_accessibilityResponderElement;
-(id)_accessibilityResponderElementForFocus;
-(BOOL)_accessibilityIsScrollAncestor;
-(void)_registerForNotificationsIfNecessary;
-(void)_pasteboardChanged:(id)arg1 ;
-(void)_axClearRemoteElements;
-(void)_axCleanupAfterTermination;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityElements;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_stopAssistingKeyboard;
@end

