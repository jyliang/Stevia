// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSObject (SWIFT_EXTENSION(Stevia))
- (void)on:(NSString * __nonnull)event :(void (^ __nonnull)(void))callback;
@end


@interface UIButton (SWIFT_EXTENSION(Stevia))
- (UIButton * __nonnull)style:(void (^ __nonnull)(UIButton * __nonnull))styleClosure;
@end


@interface UIButton (SWIFT_EXTENSION(Stevia))
- (UIButton * __nonnull)text:(NSString * __nonnull)t;
- (UIButton * __nonnull)textKey:(NSString * __nonnull)t;
- (UIButton * __nonnull)image:(NSString * __nonnull)s;
@end


@interface UIButton (SWIFT_EXTENSION(Stevia))
- (UIButton * __nonnull)tap:(void (^ __nonnull)(void))block;
- (void)tapped;
@end


@interface UICollectionView (SWIFT_EXTENSION(Stevia))
- (UICollectionView * __nonnull)style:(void (^ __nonnull)(UICollectionView * __nonnull))styleClosure;
@end


@interface UIImageView (SWIFT_EXTENSION(Stevia))
- (UIImageView * __nonnull)image:(NSString * __nonnull)t;
@end


@interface UIImageView (SWIFT_EXTENSION(Stevia))
- (UIImageView * __nonnull)style:(void (^ __nonnull)(UIImageView * __nonnull))styleClosure;
@end


@interface UILabel (SWIFT_EXTENSION(Stevia))
- (UILabel * __nonnull)style:(void (^ __nonnull)(UILabel * __nonnull))styleClosure;
@end


@interface UILabel (SWIFT_EXTENSION(Stevia))
- (UILabel * __nonnull)text:(NSString * __nonnull)t;
- (UILabel * __nonnull)textKey:(NSString * __nonnull)t;
@end


@interface UISegmentedControl (SWIFT_EXTENSION(Stevia))
- (UISegmentedControl * __nonnull)style:(void (^ __nonnull)(UISegmentedControl * __nonnull))styleClosure;
@end


@interface UITableView (SWIFT_EXTENSION(Stevia))
- (UITableView * __nonnull)style:(void (^ __nonnull)(UITableView * __nonnull))styleClosure;
@end


@interface UITextField (SWIFT_EXTENSION(Stevia))
- (UITextField * __nonnull)style:(void (^ __nonnull)(UITextField * __nonnull))styleClosure;
@end


@interface UITextField (SWIFT_EXTENSION(Stevia))
- (UITextField * __nonnull)placeholder:(NSString * __nonnull)t;
@end


@interface UITextView (SWIFT_EXTENSION(Stevia))
- (UITextView * __nonnull)style:(void (^ __nonnull)(UITextView * __nonnull))styleClosure;
@end


@interface UIView (SWIFT_EXTENSION(Stevia))
- (UIView * __nonnull)style:(void (^ __nonnull)(UIView * __nonnull))styleClosure;
@end


@interface UIView (SWIFT_EXTENSION(Stevia))
- (UIView * __nonnull)sv:(NSArray<UIView *> * __nonnull)subViews;
@end


@interface UIView (SWIFT_EXTENSION(Stevia))
@end


@interface UIView (SWIFT_EXTENSION(Stevia))
- (void)fillContainer:(CGFloat)padding;
- (void)followEdges:(UIView * __nonnull)otherView;
- (void)heightEqualsWidth;
@end


@interface UIView (SWIFT_EXTENSION(Stevia))
- (UIView * __nonnull)height:(CGFloat)points;
- (UIView * __nonnull)width:(CGFloat)points;
- (UIView * __nonnull)size:(CGFloat)points;
@end


@interface UIView (SWIFT_EXTENSION(Stevia))
- (UIView * __nonnull)stackHWithM:(CGFloat)points v:(UIView * __nonnull)v;
- (NSArray<UIView *> * __nonnull)layout:(NSArray * __nonnull)objects;
- (UIView * __nonnull)stackVWithM:(CGFloat)points v:(UIView * __nonnull)v;
- (NSArray<UIView *> * __nonnull)stackV:(NSArray * __nonnull)objects;
- (NSArray<UIView *> * __nonnull)stackH:(NSArray * __nonnull)objects;
@end


@interface UIView (SWIFT_EXTENSION(Stevia))
- (UIView * __nonnull)left:(CGFloat)points;
- (UIView * __nonnull)right:(CGFloat)points;
- (UIView * __nonnull)top:(CGFloat)points;
- (UIView * __nonnull)bottom:(CGFloat)points;
- (UIView * __nonnull)minimumBottomSpace:(CGFloat)points;
- (UIView * __nonnull)fillHWithM:(CGFloat)points;
- (UIView * __nonnull)fillVWithM:(CGFloat)points;
- (void)centerInContainer;
- (void)centerHorizontallyInContainer;
- (void)centerVerticallyInContainer;
@end


@interface UIView (SWIFT_EXTENSION(Stevia))
@property (nonatomic, copy) NSDictionary<NSString *, id> * __null_unspecified views;
- (void)h:(NSString * __nonnull)string;
- (void)h:(NSString * __nonnull)string withOption:(NSLayoutFormatOptions)withOption;
- (void)v:(NSString * __nonnull)string;
- (void)v:(NSString * __nonnull)string withOption:(NSLayoutFormatOptions)withOption;
- (void)kaddVisualConstraint:(NSString * __nonnull)string withOption:(NSLayoutFormatOptions)withOption;
@end

#pragma clang diagnostic pop
